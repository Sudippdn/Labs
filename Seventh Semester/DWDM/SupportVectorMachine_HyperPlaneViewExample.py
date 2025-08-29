import numpy as np
import matplotlib.pyplot as plt
from sklearn import svm

# 1. Generate some synthetic data
X = np.array([
    [1, 2], [2, 3], [3, 3], [4, 4],  # Class 0
    [6, 7], [7, 8], [8, 7], [9, 9]   # Class 1
])
y = np.array([0, 0, 0, 0, 1, 1, 1, 1])
X
y
# 2. Train a Linear SVM model
clf = svm.SVC(kernel='linear')
clf.fit(X, y)

# 3. Plot the data, hyperplane, and boundary lines
plt.figure(figsize=(8, 6))
plt.scatter(X[:, 0], X[:, 1], c=y, s=100, cmap='viridis', edgecolors='k')

# Plot the hyperplane (decision boundary)
ax = plt.gca()
xlim = ax.get_xlim()
ylim = ax.get_ylim()

xx = np.linspace(xlim[0], xlim[1], 30)
yy = np.linspace(ylim[0], ylim[1], 30)
YY, XX = np.meshgrid(yy, xx)
xy = np.vstack([XX.ravel(), YY.ravel()]).T
Z = clf.decision_function(xy).reshape(XX.shape)

# Plot decision boundary and margins
ax.contour(XX, YY, Z, colors='k', levels=[-1, 0, 1], alpha=0.5,
           linestyles=['--', '-', '--'])

# Plot support vectors
ax.scatter(clf.support_vectors_[:, 0], clf.support_vectors_[:, 1], s=200,
           linewidth=1, facecolors='none', edgecolors='r')

plt.xlabel("Feature 1")
plt.ylabel("Feature 2")
plt.title("SVM Hyperplane and Boundary Lines")
plt.show()