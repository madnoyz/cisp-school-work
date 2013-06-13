import os
import csv

headf = open('mapheader.txt', 'r')
footf = open('mapfooter.txt', 'r')
tablef = open('ditamap.ditamap', 'w')
csvf = open('ditamap.csv', 'r')
readeri = csv.reader(csvf)

opentopicref = "<topicref href=\""
opennavtitle = " navtitle=\""
closetopicref = " navtitle=\"\">\n"
pound = "#"
openmaptitle = "<map title=\"Insert Map Title Here"
closemaptitle ="\" \n"

# begin header (pull namespace, etc from different file)
tablef.write(str(headf.read()))
# begin cycling trough csv file

# next line should catch the title cell
tablef.write(openmaptitle + closemaptitle)

# move "cursor" down to omit the heading row
readeri.next()
readeri.next()
for row in readeri:
tablef.write(opentopicref)
for element in row[:-1]:
tablef.write(element)
for element in row[-1:]:
tablef.write(pound + element)
tablef.write(closetopicref)

tablef.write(str(footf.read()))

headf.close()
footf.close()
tablef.close()
csvf.close()