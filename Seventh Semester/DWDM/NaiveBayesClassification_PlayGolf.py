import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.naive_bayes import CategoricalNB
from sklearn.metrics import accuracy_score

# Dataset
data = {
    'Outlook': ['Rainy', 'Rainy', 'Overcast', 'Sunny', 'Sunny', 'Sunny', 'Overcast', 'Rainy', 'Rainy', 'Sunny', 'Rainy', 'Overcast', 'Overcast', 'Sunny'],
    'Temperature': ['Hot', 'Hot', 'Hot', 'Mild', 'Cool', 'Cool', 'Cool', 'Mild', 'Cool', 'Mild', 'Mild', 'Mild', 'Hot', 'Mild'],
    'Humidity': ['High', 'High', 'High', 'High', 'Normal', 'Normal', 'Normal', 'High', 'Normal', 'Normal', 'Normal', 'High', 'Normal', 'High'],
    'Windy': [False, True, False, False, False, True, True, False, False, False, True, True, False, True],
    'Play Golf': ['No', 'No', 'Yes', 'Yes', 'Yes', 'No', 'Yes', 'No', 'Yes', 'Yes', 'Yes', 'Yes', 'Yes', 'No']
}
data
# Convert to DataFrame
df = pd.DataFrame(data)
df
# Encode categorical variables
df_encoded = pd.get_dummies(df.drop('Play Golf', axis=1), drop_first=True)
labels = df['Play Golf'].map({'No': 0, 'Yes': 1})  # Map target variable

# Features and target variable
X = df_encoded
y = labels

X
y
# Split data into train and test sets
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)
len(X_train)
len(X_test)
# Initialize Naive Bayes classifier
model = CategoricalNB()

# Train the model
model.fit(X_train, y_train)

# Make predictions
y_pred = model.predict(X_test)

# Evaluate the model
accuracy = accuracy_score(y_test, y_pred)
print(f"Accuracy: {accuracy * 100:.2f}%")

# Display predictions
print("\nPredictions:")
for actual, predicted in zip(y_test, y_pred):
    print(f"Actual: {actual}, Predicted: {predicted}")

# Function to classify new input
def classify_input(model, input_data, original_df):
    """
    Classify a new input using the trained model.
    :param model: Trained Naive Bayes model.
    :param input_data: Dictionary of input data (new observation).
    :param original_df: Original DataFrame to align input columns.
    :return: Classification result.
    """
    # Convert input data to DataFrame
    input_df = pd.DataFrame([input_data])
    
    # Encode input data similarly to training data
    input_encoded = pd.get_dummies(input_df)
    
    # Align columns with the training data
    input_encoded = input_encoded.reindex(columns=original_df.columns, fill_value=0)
    
    # Predict using the model
    prediction = model.predict(input_encoded)
    return "Yes" if prediction[0] == 1 else "No"

# Test the function with a new input
new_input = {
    'Outlook': 'Sunny',
    'Temperature': 'Cool',
    'Humidity': 'High',
    'Windy': False
}

result = classify_input(model, new_input, X)
print("\nNew Input Classification:")
print(f"Input: {new_input}, Classification: {result}")
