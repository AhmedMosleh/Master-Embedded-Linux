import re
import openpyxl

# Open and read the header file
header_file = open('header_test.h', 'r')
lines = header_file.read()

# Use regular expressions to find function prototypes
myfuncs = re.findall(r"(((void)|(uint\w+))\s+[A-z0-9]+(\s+)?\([A-z0-9\s+\*\,]+\)\;)", lines)


func_list = []
for func in myfuncs:
    func_list.append(func[0])
unique_ids = [f'IDX{i}' for i in range(0, len(func_list))]

# Create a new Excel workbook and select the active sheet
workbook = openpyxl.Workbook()
sheet = workbook.active
data = [func_list, unique_ids]

data_transposed = list(map(list, zip(*data)))

for row in data_transposed:
    sheet.append(row)

workbook.save('sheet.xlsx')
workbook.close()
