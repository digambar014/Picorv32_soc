import sys
import struct

def bin2hex(input_path: str, output_path: str) -> None:
    with open(input_path, "rb") as f:
        data = f.read()

    remainder = len(data) % 4
    if remainder:
        data += b'\x00' * (4 - remainder)

    words = struct.unpack(f"<{len(data)//4}I", data)

    with open(output_path, "w") as f:
        for word in words:
            f.write(f"{word:08x}\n")

    print(f"Converted {len(words)} words ({len(data)} bytes) -> {output_path}")


if __name__ == "__main__":
    if len(sys.argv) != 3:
        print(f"Usage: {sys.argv[0]} <input.bin> <output.hex>")
        sys.exit(1)

    bin2hex(sys.argv[1], sys.argv[2])

