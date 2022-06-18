#!/usr/bin/python3

import csv
import argparse

parser=argparse.ArgumentParser()
parser.add_argument('input')
parser.add_argument('output')
args=parser.parse_args()

pixel_rotate=[]
with open(args.input) as fin:
    reader = csv.reader(fin, delimiter=',')
    for row in reader:
        row_invert = []
        for element in row:
            row_invert.insert(0, element)
        pixel_rotate.insert(0, row_invert)

with open(args.output, 'w') as fout:
    writer = csv.writer(fout, delimiter=',')
    for row in pixel_rotate:
        writer.writerow(row)
