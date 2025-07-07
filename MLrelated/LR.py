import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

# simple linear regression
data = {
    "Hours" : [1,2,3,4,5,6],
    "Score" : [10,20,30,45,55,70]
}

df = pd.DataFrame(data)

X = df["Hours"].values
Y = df["Score"].values
mean_x = np.mean(X)
mean_y = np.mean(Y)

# y = mx + c
num = np.sum((X - mean_x) * (Y - mean_y))
den = np.sum((X - mean_x) ** 2)

m = num / den
c = mean_y - m * mean_x
predicted_Y = m * X + c

plt.scatter(X, Y, color='blue', label='Data Points')
plt.plot(X, predicted_Y, color='red', label='Regression Line')
plt.xlabel('Hours Studied')
plt.ylabel('Score')
plt.legend()
plt.title('Linear Regression From Scratch')
plt.show()
