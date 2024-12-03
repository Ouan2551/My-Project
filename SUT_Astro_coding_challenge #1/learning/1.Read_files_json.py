import json #import module json
with open('Challenge2_data.json', 'r') as f:
    
    #The open() function opens the specified file in read mode ('r').
    
    data = json.load(f)
    
    #parses the JSON data from the file and returns it as a Python object

#output data
print(data)
print("****************")

# Accessing specific data
apparent_magnitudes = data['Apparent Magitude (m)']
absolute_magnitudes = data['Absolute Magnitude (M)']
redshifts = data['Redshift (z)']

# Printing the first 5 values of each list
print("First 5 Apparent Magnitudes:", apparent_magnitudes[:5])
print("First 5 Absolute Magnitudes:", absolute_magnitudes[:5])
print("First 5 Redshifts:", redshifts[:5])