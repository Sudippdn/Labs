import numpy as np
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans

# Given data
data = np.array([2, 5, 7, 8, 13, 16, 18, 28, 30]).reshape(-1, 1)  # Reshape for sklearn
data
# Number of clusters
k = 2

# Apply KMeans
kmeans = KMeans(n_clusters=k, random_state=0)
kmeans.fit(data)

# Cluster assignments
labels = kmeans.labels_

# Cluster centers
centers = kmeans.cluster_centers_

# Print results
print("Cluster Assignments:")
for value, label in zip(data.flatten(), labels):
    print(f"Value: {value}, Cluster: {label}")

print("\nCluster Centers:")
for i, center in enumerate(centers):
    print(f"Cluster {i}: {center[0]}")

# Optional: Plotting
plt.scatter(data, [0]*len(data), c=labels, cmap='viridis', s=100)
plt.scatter(centers, [0]*k, c='red', marker='x', s=200, label='Centroids')
plt.yticks([])
plt.title('K-Means Clustering (k=3)')
plt.xlabel('Data Values')
plt.legend()
plt.grid(True)
plt.show()

