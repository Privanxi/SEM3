import os
import zipfile
import rarfile
import shutil


start_folder = r"c:\Users\najoa\Downloads\Extracted\secret_file_1000_extracted"  
rarfile.UNRAR_TOOL = r"C:\Program Files\WinRAR\WinRAR.exe"       
base_dir = os.path.join(os.path.dirname(start_folder), "final_extract")


if os.path.exists(base_dir):
    shutil.rmtree(base_dir)
os.makedirs(base_dir, exist_ok=True)

layer = 0
current_file = None




def extract_zip(file_path, output_dir):
    with zipfile.ZipFile(file_path, 'r') as z:
        z.extractall(output_dir)
        return [os.path.join(output_dir, n) for n in z.namelist()]

def extract_rar(file_path, output_dir):
    with rarfile.RarFile(file_path) as r:
        r.extractall(output_dir)
        return [os.path.join(output_dir, n) for n in r.namelist()]



print("🔎 Mencari arsip paling dalam di:", start_folder)

deepest_file = None
max_depth = -1

for root, dirs, files in os.walk(start_folder):
    for f in files:
        if f.lower().endswith((".zip", ".rar")):
            depth = root.count(os.sep)
            if depth > max_depth:
                max_depth = depth
                deepest_file = os.path.join(root, f)

if not deepest_file:
    print("⚠️ Tidak ditemukan file ZIP/RAR di folder ini.")
    exit()

print("📦 Arsip paling dalam ditemukan:", deepest_file)
current_file = deepest_file




while True:
    layer += 1
    extract_path = os.path.join(base_dir, f"layer_{layer}")
    os.makedirs(extract_path, exist_ok=True)

    print(f"\n📂 Mengekstrak lapisan ke-{layer}: {current_file}")

    try:
        if current_file.lower().endswith(".zip"):
            inner_files = extract_zip(current_file, extract_path)
        elif current_file.lower().endswith(".rar"):
            inner_files = extract_rar(current_file, extract_path)
        else:
            print("✅ Selesai — bukan arsip:", current_file)
            break
    except Exception as e:
        print("⚠️ Gagal mengekstrak:", e)
        break

    if not inner_files:
        print("⚠️ Arsip kosong.")
        break

    next_file = None
    for f in inner_files:
        if f.lower().endswith((".zip", ".rar")):
            next_file = f
            break

    if not next_file:
        print("✅ Tidak ada arsip lain di dalamnya.")
        last_file = inner_files[-1]
        print("📁 File terakhir ditemukan:", last_file)

        
        if last_file.lower().endswith((".txt", ".log", ".csv")):
            try:
                with open(last_file, "r", encoding="utf-8") as fp:
                    print("\n===== ISI FILE TERAKHIR =====")
                    print(fp.read())
                    print("==============================")
            except UnicodeDecodeError:
                print("⚠️ File terakhir tidak bisa dibaca sebagai teks (mungkin biner).")

        
        try:
            print("📖 Membuka file terakhir...")
            os.startfile(last_file)
        except Exception as e:
            print("⚠️ Tidak bisa membuka file:", e)
        break

    current_file = next_file
