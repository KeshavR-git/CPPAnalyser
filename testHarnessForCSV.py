import csv

with open('/Users/kr/Desktop/Research Project Summer 2023/CPPAnalyser/Testing/Lab10-answers.csv') as csv_file:
    csv_reader = csv.reader(csv_file, delimiter=',')
    line_count = 0
    for row in csv_reader:
        if line_count == 0:
            first = row[0]
            print('First row ')
            line_count += 1
        else:
            if row[1] > "1":
                name = "s" + row[0].zfill(3) + "_v" + row[1] + ".c"
            else:
                name = "s" + row[0].zfill(3) +  ".c"
            print('filename is {}'.format(name))
            outF = open(name, "w")
            outF.write(row[4])
            outF.close()
            line_count += 1
    print('Processed {} files.'.format(line_count))
