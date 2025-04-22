# 📊 Regresión Lineal Simple

Este programa en C++ calcula la **recta de regresión lineal** para un conjunto de puntos \((x, y)\), utilizando el **método de mínimos cuadrados**. Además, calcula estadísticas asociadas como el **error estándar**, la **correlación** y el **coeficiente de determinación \( R^2 \)**.

---

## 🧮 Fórmula utilizada

La ecuación general de una regresión lineal es:
\[
y = a_0 + a_1x
\]

Donde:
- \( a_1 \): pendiente de la recta
- \( a_0 \): ordenada al origen (intersección con eje Y)

### Cálculo de coeficientes:

\[
a_1 = \frac{n \sum xy - \sum x \sum y}{n \sum x^2 - (\sum x)^2}
\]
\[
a_0 = \bar{y} - a_1 \bar{x}
\]

### Error estándar de la estimación:
\[
S_{y|x} = \sqrt{\frac{\sum (y_i - \hat{y}_i)^2}{n - 2}}
\]

### Coeficiente de determinación:
\[
R^2 = \frac{S_t - S_r}{S_t}
\]

---

## ✨ Funcionalidad

- 📥 **Entrada**: el usuario introduce \( n \) pares de coordenadas \( (x_i, y_i) \).
- 🔍 El programa calcula:
  - Media de \( x \) y \( y \)
  - Coeficientes \( a_0 \) y \( a_1 \)
  - Error estándar \( S_{y|x} \)
  - Coeficiente de determinación \( R^2 \)
- 📤 **Salida**: muestra la tabla de datos, los coeficientes calculados y las métricas estadísticas.

---
