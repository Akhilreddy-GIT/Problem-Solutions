import random
import time
import numpy as np

# Method 1: Using Lists
# Generate a large list of random numbers
data_list = [random.random() for _ in range(1000000)]

# Calculate the mean using Python lists
start = time.time()
mean_list = sum(data_list) / len(data_list)
end = time.time()
print("Mean (list):", mean_list)
print("Time taken (list):", end - start)

# Method 2: Using NumPy
# Generate a large NumPy array of random numbers
data_array = np.random.random(1000000)

# Calculate the mean using NumPy
start = time.time()
mean_array = np.mean(data_array)
end = time.time()
print("Mean (NumPy):", mean_array)
print("Time taken (NumPy):", end - start)