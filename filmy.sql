-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:4306
-- Generation Time: Maj 07, 2024 at 07:20 AM
-- Wersja serwera: 10.4.32-MariaDB
-- Wersja PHP: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `filmy`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `filmy`
--

CREATE TABLE `filmy` (
  `ID` int(3) NOT NULL,
  `Tytuł` varchar(255) NOT NULL,
  `Ocena` float NOT NULL,
  `Gatunek` text NOT NULL,
  `Czy_obejrzane` tinyint(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `filmy`
--

INSERT INTO `filmy` (`ID`, `Tytuł`, `Ocena`, `Gatunek`, `Czy_obejrzane`) VALUES
(1, 'Skazani na Shawshank', 8.76, 'Dramat', 0),
(2, 'Nietykalni', 8.6, 'Biograficzny', 0),
(3, 'Zielona mila', 8.6, 'Dramat', 0),
(4, 'Ojciec chrzestny', 8.59, 'Dramat', 0),
(5, 'Dwunastu gniewnych ludzi', 8.57, 'Dramat sądowy', 0),
(6, 'Forrest Gump', 8.52, 'Dramat', 0),
(7, 'Lot nad kukułczym gniazdem', 8.43, 'Dramat', 0),
(8, 'Ojciec chrzestny II', 8.38, 'Dramat', 0),
(9, 'Władca Pierścieni: Powrót króla', 8.35, 'Fantasy', 0),
(10, 'Lista Schindlera', 8.33, 'Dramat', 0),
(11, 'Pulp Fiction', 8.31, 'Gangsterski', 0),
(12, 'Życie jest piękne', 8.29, 'Dramat', 0),
(13, 'Władca Pierścieni: Dwie wieże', 8.27, 'Fantasy', 0),
(14, 'Siedem', 8.27, 'Kryminał', 0),
(15, 'Podziemny krąg', 8.25, 'Thriller', 0),
(16, 'Chłopcy z ferajny', 8.24, 'Dramat', 0),
(17, 'Pianista', 8.23, 'Biograficzny', 0),
(18, 'Joker', 8.22, 'Dramat', 0),
(19, 'Django', 8.22, 'Western', 0),
(20, 'Piękny umysł', 8.21, 'Biograficzny', 0),
(21, 'Incepcja', 8.21, 'Surrealistyczny', 0),
(22, 'Milczenie owiec', 8.21, 'Thriller', 0),
(23, 'Król Lew', 8.21, 'Animacja', 0),
(24, 'Człowiek z blizną', 8.16, 'Dramat', 0),
(25, 'Gran Torino', 8.16, 'Dramat', 0),
(26, 'Coco', 8.16, 'Animacja', 0),
(27, 'Wyspa tajemnic', 8.15, 'Dramat', 0),
(28, 'Leon zawodowiec', 8.12, 'Dramat', 0),
(29, 'Więzień nienawiści', 8.12, 'Dramat', 0),
(30, 'Green Book', 8.1, 'Dramat', 0),
(31, 'Gladiator', 8.1, 'Dramat historyczny', 0),
(32, 'Diuna: Część druga', 8.09, 'Sci-Fi', 0),
(33, 'Szeregowiec Ryan', 8.07, 'Dramat', 0),
(34, 'Braveheart - Waleczne Serce', 8.06, 'Dramat historyczny', 0),
(35, 'Whiplash', 8.06, 'Dramat', 0),
(36, 'Buntownik z wyboru', 8.06, 'Dramat obyczajowy', 0),
(37, 'Chłopiec w pasiastej piżamie', 8.05, 'Dramat', 0),
(38, 'Przełęcz ocalonych', 8.05, 'Biograficzny', 0),
(39, 'Czas Apokalipsy', 8.04, 'Dramat', 0),
(40, 'Zapach kobiety', 8.04, 'Dramat', 0),
(41, 'Prestiż', 8.03, 'Dramat', 0),
(42, 'Gwiezdne wojny: Część V - Imperium kontratakuje', 8.03, 'Przygodowy', 0),
(43, 'Dobry, zły i brzydki', 8.02, 'Western', 0),
(44, 'Avengers: Wojna bez granic', 8.02, 'Akcja', 0),
(45, 'Gwiezdne wojny: Część VI - Powrót Jedi', 8.01, 'Przygodowy', 0),
(46, 'Dawno temu w Ameryce', 8, 'Dramat', 0),
(47, 'Służące', 8, 'Dramat', 0),
(48, 'Kasyno', 8, 'Dramat', 0),
(49, 'Mroczny Rycerz', 7.99, 'Akcja', 0),
(50, 'Władca Pierścieni: Drużyna Pierścienia', 7.99, 'Fantasy', 0),
(51, 'Gorączka', 7.99, 'Sensacyjny', 0),
(52, 'Parasite', 7.99, 'Dramat', 0),
(53, 'W pogoni za szczęściem', 7.99, 'Biograficzny', 0),
(54, 'Amadeusz', 7.98, 'Biograficzny', 0),
(55, 'Bękarty wojny', 7.98, 'Wojenny', 0),
(56, 'Pluton', 7.97, 'Dramat', 0),
(57, 'Pamiętnik', 7.96, 'Melodramat', 0),
(58, 'Spirited Away: W krainie Bogów', 7.96, 'Fantasy', 0),
(59, 'Infiltracja', 7.96, 'Kryminał', 0),
(60, 'Bogowie', 7.94, 'Biograficzny', 0),
(61, 'Przebudzenia', 7.93, 'Dramat obyczajowy', 0),
(62, 'Psychoza', 7.92, 'Thriller', 0),
(63, 'Mój przyjaciel Hachiko', 7.92, 'Dramat', 0),
(64, 'Łowca jeleni', 7.92, 'Dramat', 0),
(65, 'Siedem dusz', 7.91, 'Dramat', 0),
(66, 'Avengers: Koniec gry', 7.91, 'Akcja', 0),
(67, 'Interstellar', 7.9, 'Sci-Fi', 0),
(68, 'Miasto Boga', 7.9, 'Dramat', 0),
(69, 'Przekręt', 7.88, 'Komedia kryminalna', 0),
(70, 'Rain Man', 7.88, 'Dramat', 0),
(71, 'Adwokat diabła', 7.87, 'Thriller', 0),
(72, 'Monty Python i Święty Graal', 7.86, 'Komedia', 0),
(73, 'Wściekłe psy', 7.86, 'Thriller', 0),
(74, 'Full Metal Jacket', 7.86, 'Dramat', 0),
(75, 'Trzy billboardy za Ebbing, Missouri', 7.85, 'Dramat', 0),
(76, 'Gwiezdne wojny: Część IV - Nowa nadzieja', 7.85, 'Przygodowy', 0),
(77, 'Ojciec chrzestny III', 7.85, 'Dramat', 0),
(78, 'Cinema Paradiso', 7.85, 'Dramat', 0),
(79, 'Zwierzogród', 7.85, 'Animacja', 0),
(80, 'Spider-Man Uniwersum', 7.84, 'Animacja', 0),
(81, 'Contratiempo. Niewidzialny gość', 7.84, 'Kryminał', 0),
(82, 'Najlepszy', 7.83, 'Biograficzny', 0),
(83, 'Mechaniczna pomarańcza', 7.83, 'Dramat', 0),
(84, 'Żądło', 7.82, 'Komedia kryminalna', 0),
(85, 'Klaus', 7.82, 'Animacja', 0),
(86, 'Pan od muzyki', 7.82, 'Dramat', 0),
(87, 'Złap mnie, jeśli potrafisz', 7.82, 'Komedia kryminalna', 0),
(88, 'Labirynt', 7.82, 'Thriller', 0),
(89, 'Wróg u bram', 7.82, 'Dramat', 0),
(90, 'Oppenheimer', 7.81, 'Biograficzny', 0),
(91, 'Siedmiu samurajów', 7.81, 'Dramat', 0),
(92, 'Ojciec', 7.81, 'Dramat', 0),
(93, 'Jak wytresować smoka', 7.81, 'Animacja', 0),
(94, 'Requiem dla snu', 7.81, 'Dramat', 0),
(95, 'Koneser', 7.81, 'Dramat', 0),
(96, 'Bohemian Rhapsody', 7.81, 'Biograficzny', 0),
(97, 'Jak rozpętałem drugą wojnę światową', 7.8, 'Komedia', 0),
(98, 'Księżniczka Mononoke', 7.8, 'Fantasy', 0),
(99, 'Obcy - 8. pasażer \"Nostromo\"', 7.8, 'Horror', 0),
(100, 'Ruchomy zamek Hauru', 7.8, 'Fantasy', 0),
(101, 'Żywot Briana', 7.8, 'Komedia', 0),
(102, 'Filadelfia', 7.8, 'Dramat', 0),
(103, 'Życie Carlita', 7.79, 'Gangsterski', 0),
(104, 'Wszystko za życie', 7.79, 'Biograficzny', 0),
(105, 'Przerwana lekcja muzyki', 7.79, 'Biograficzny', 0),
(106, 'Shrek', 7.79, 'Animacja', 0),
(107, 'Szósty zmysł', 7.78, 'Thriller', 0),
(108, 'Uśpieni', 7.78, 'Dramat', 0),
(109, 'Człowiek w ogniu', 7.78, 'Dramat', 0),
(110, 'Sami swoi', 7.78, 'Komedia obycz.', 0),
(111, 'Chłopi', 7.78, 'Animacja', 0),
(112, 'Skrzypek na dachu', 7.77, 'Dramat', 0),
(113, 'Chłopaki nie płaczą', 7.76, 'Komedia', 0),
(114, 'Lśnienie', 7.76, 'Horror', 0),
(115, 'Taksówkarz', 7.76, 'Dramat', 0),
(116, 'Gra', 7.76, 'Thriller', 0),
(117, 'Prawo zemsty', 7.76, 'Thriller', 0),
(118, 'Lęk pierwotny', 7.76, 'Dramat', 0),
(119, 'Stowarzyszenie Umarłych Poetów', 7.76, 'Dramat', 0),
(120, 'Sens życia wg Monty Pythona', 7.75, 'Komedia', 0),
(121, 'Dzień świra', 7.75, 'Dramat', 0),
(122, 'Pół żartem, pół serio', 7.75, 'Komedia', 0),
(123, 'Pokój', 7.75, 'Dramat', 0),
(124, 'Ściana', 7.75, 'Dramat', 0),
(125, 'Pogorzelisko', 7.75, 'Dramat', 0);

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `filmy`
--
ALTER TABLE `filmy`
  ADD PRIMARY KEY (`ID`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
