from sklearn import svm
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score
import numpy as np

# 1. Prepare your data
# Create a synthetic dataset for demonstration
X = np.array([[1, 2], [2, 3], [3, 4], [8, 9], [9, 10], [10, 11]]) # Features
y = np.array([0, 0, 0, 1, 1, 1]) # Labels (0 or 1 for binary classification)

# 2. Split the data into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=42)

# 3. Create an instance of the SVM classifier
# Using a linear kernel for simplicity
clf = svm.SVC(kernel='linear')

# 4. Train the SVM classifier
clf.fit(X_train, y_train)

# 5. Make predictions on the test set
y_pred = clf.predict(X_test)

# 6. Evaluate the classifier's performance
accuracy = accuracy_score(y_test, y_pred)
print(f"Accuracy: {accuracy:.2f}")

# Optional: Predict on new, unseen data
new_data = np.array([[5, 6], [1, 1]])
predictions_new_data = clf.predict(new_data)
print(f"Predictions for new data: {predictions_new_data}")