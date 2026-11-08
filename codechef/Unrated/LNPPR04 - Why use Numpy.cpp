import numpy as np

# Method 1: Using Python Lists
# Create a 1D list
data_list = [1, 2, 3, 4, 5, 6]

# Reshape into a 2x3 "matrix"
data_matrix = [data_list[i:i + 3] for i in range(0, len(data_list), 3)]
print("Reshaped list (2x3):")
print(data_matrix)

# Transpose the "matrix"
transposed_matrix = [[data_matrix[j][i] for j in range(len(data_matrix))] for i in range(len(data_matrix[0]))]
print("Transposed list (3x2):")
print(transposed_matrix)

# Method 2: Using NumPy
# Create a 1D NumPy array
data_array = np.array([1, 2, 3, 4, 5, 6])

# Reshape into a 2x3 matrix
reshaped_array = data_array.reshape((2, 3))
print("Reshaped array (2x3):")
print(reshaped_array)

# Transpose the matrix
transposed_array = reshaped_array.T
print("Transposed array (3x2):")
print(transposed_array)
