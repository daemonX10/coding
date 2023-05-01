function calculateTotal() {
  const quantity = Number(document.getElementById('quantity').value);
  const price = Number(document.getElementById('price').value);
  const total = quantity * price;
  document.getElementById('total').value = total.toFixed(2);
}

function resetForm() {
  document.getElementById('name').value = '';
  document.getElementById('email').value = '';
  document.getElementById('quantity').value = '';
  document.getElementById('price').value = '';
  document.getElementById('total').value = '';
}
