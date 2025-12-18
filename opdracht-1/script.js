function updateCountdown() {
    const now = new Date();

    const nextYear = now.getFullYear() + 1;
    const newYear = new Date(nextYear, 0, 1, 0, 0, 0);

    const diff = newYear - now;

    if (diff <= 0) {
        document.getElementById("countdown").textContent = "🎉 Happy New Year!";
        clearInterval(timer);
        return;
    }

    const totalSeconds = Math.floor(diff / 1000);

    const days = Math.floor(totalSeconds / 86400);
    const hours = Math.floor((totalSeconds % 86400) / 3600);
    const minutes = Math.floor((totalSeconds % 3600) / 60);
    const seconds = totalSeconds % 60;

    document.getElementById("countdown").textContent =
        `${days}d ${hours}u ${minutes}m ${seconds}s`;
}

updateCountdown();
const timer = setInterval(updateCountdown, 1000);