# Catalog Assesment

## Project Overview

This project implements **Lagrange interpolation** to solve for the constant term (`c`) of a polynomial given a set of points. The code reads inputs representing polynomial points encoded in different bases and uses interpolation to reconstruct the polynomial and extract its constant term.

### Features:
- Decodes values from various numerical bases.
- Implements **Lagrange Interpolation** to compute the constant term of a polynomial.
- Efficient handling of floating-point precision for accurate results.

## Algorithm

The algorithm uses **Lagrange interpolation**, which allows us to interpolate the polynomial using a given set of points:

For a set of points \((x_1, y_1), (x_2, y_2), ..., (x_k, y_k)\), the polynomial of degree \(k-1\) is reconstructed, and we solve for the constant term \(c\) at \(x = 0\).

The Lagrange basis polynomial \(L_i(x)\) is computed as:

\[
L_i(x) = \prod_{\substack{j=0 \\ j \neq i}}^{k-1} \frac{x - x_j}{x_i - x_j}
\]

The result is the summation of the products of the \(y_i\) values with their corresponding \(L_i(x)\).

## Code Explanation

The project consists of the following key components:

1. **Point Structure**:
   The `Point` structure holds the x and y values for each point.

2. **decode_y Function**:
   Decodes a string number from a specified base to a decimal (base-10) integer.

3. **lagrange_interpolation Function**:
   Implements the core logic of Lagrange interpolation to compute the constant term `c`.

4. **main.cpp**:
   - Manages input parsing.
   - Decodes values from various bases.
   - Calls the interpolation function to compute the constant term.

## How to Run

To compile and run the project locally, follow these steps:

1. **Clone the repository**:
   ```bash
   git clone https://github.com/yourusername/Catalog_assesment.git
   cd Catalog_assesment
