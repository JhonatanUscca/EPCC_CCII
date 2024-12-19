let currentIndex = 0;

function showSlide(index) {
  const carousel = document.getElementById('carousel');
  const slides = carousel.children.length;
  currentIndex = (index + slides) % slides;
  carousel.style.transform = `translateX(-${currentIndex * 100}%)`;
  updateIndicators();
}

function nextSlide() {
  showSlide(currentIndex + 1);
}

function prevSlide() {
  showSlide(currentIndex - 1);
}

function updateIndicators() {
  const indicators = document.querySelectorAll('.indicator');
  indicators.forEach((dot, index) => {
    dot.classList.toggle('bg-gray-800', index === currentIndex);
    dot.classList.toggle('bg-gray-400', index !== currentIndex);
    dot.classList.toggle('scale-125', index === currentIndex); // Aumenta el tamaño del punto activo
  });
}

// Inicializa el indicador en el primer slide
updateIndicators();