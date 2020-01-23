import subprocess
 
def main():
    a = 2.2
    b = 3.3
 
    # call C/C++ executable file
    cmd = "./a.out " + str(a) + " " + str(b)
    c = subprocess.check_output(cmd.split())
    # print(type(c))
    # print(c.decode('sjis'))
 
    ans = float(c) + 1
 
    print(ans)
 
if __name__ == '__main__':
    main()
