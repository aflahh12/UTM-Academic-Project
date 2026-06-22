-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jan 31, 2025 at 07:25 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `db_crs`
--

-- --------------------------------------------------------

--
-- Table structure for table `tb_course`
--

CREATE TABLE `tb_course` (
  `c_code` varchar(10) NOT NULL,
  `c_name` varchar(30) NOT NULL,
  `c_credit` int(11) NOT NULL,
  `c_lec` varchar(10) NOT NULL,
  `c_sem` varchar(20) NOT NULL,
  `c_maxstudent` int(30) NOT NULL,
  `c_section` varchar(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `tb_course`
--

INSERT INTO `tb_course` (`c_code`, `c_name`, `c_credit`, `c_lec`, `c_sem`, `c_maxstudent`, `c_section`) VALUES
('secc1234', 'test', 2, 'L002', '2023/2024-2', 30, '01'),
('SECJ1033', 'Data Structure and Algorithm', 3, 'L002', '2024/2025-1', 30, '01'),
('SECP2523', 'Database', 3, 'L005', '2024/2025-1', 30, '01'),
('SECP3723', 'System Development Technology', 3, 'L001', '2024/2025-1', 30, '01');

-- --------------------------------------------------------

--
-- Table structure for table `tb_registration`
--

CREATE TABLE `tb_registration` (
  `r_id` int(11) NOT NULL,
  `r_student` varchar(10) NOT NULL,
  `r_course` varchar(10) NOT NULL,
  `r_sem` varchar(11) NOT NULL,
  `r_status` int(11) NOT NULL,
  `r_section` varchar(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `tb_registration`
--

INSERT INTO `tb_registration` (`r_id`, `r_student`, `r_course`, `r_sem`, `r_status`, `r_section`) VALUES
(1, 'S001', 'SECP3723', '2024/2025-1', 2, '01'),
(2, 'S002', 'SECJ1033', '2024/2025-1', 2, '01'),
(10, 'S002', 'SECP2523', '2024/2025-1', 1, '01'),
(11, 'S002', 'SECP3723', '2024/2025-1', 1, '01');

-- --------------------------------------------------------

--
-- Table structure for table `tb_status`
--

CREATE TABLE `tb_status` (
  `s_id` int(11) NOT NULL,
  `s_desc` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `tb_status`
--

INSERT INTO `tb_status` (`s_id`, `s_desc`) VALUES
(2, 'Approved'),
(1, 'Received'),
(3, 'Rejected');

-- --------------------------------------------------------

--
-- Table structure for table `tb_user`
--

CREATE TABLE `tb_user` (
  `u_sno` varchar(10) NOT NULL,
  `u_pwd` varchar(20) NOT NULL,
  `u_email` varchar(30) NOT NULL,
  `u_name` varchar(50) NOT NULL,
  `u_contact` varchar(20) NOT NULL,
  `u_state` varchar(20) NOT NULL,
  `u_reg` date DEFAULT NULL,
  `u_utype` int(11) NOT NULL,
  `u_lastactivity` datetime DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `tb_user`
--

INSERT INTO `tb_user` (`u_sno`, `u_pwd`, `u_email`, `u_name`, `u_contact`, `u_state`, `u_reg`, `u_utype`, `u_lastactivity`) VALUES
('A001', 'admin123', 'admin@gmail.com', 'Admin', '01125544623', 'Johor', NULL, 3, NULL),
('L001', '123456', 'aina@gmail.com', 'Aina Abdul', '191111111', 'Johor', '2023-02-01', 1, NULL),
('L002', '123456', 'faz@gmail.com', 'Fazura Abdul', '172222222', 'Kelantan', '2023-10-01', 1, NULL),
('L003', '123', 'nurul@gmail.com', 'Nurul', '0000001122', 'Johor', '2025-01-30', 3, NULL),
('L004', '$2y$10$fTNDfmuaTNPHv', 'lec4@gmail.com', 'lecturer', '0123456123', 'W.P.Putrajaya', '2025-01-30', 1, NULL),
('L005', '123456', 'roz@gmail.com', 'Rozilawati', '0111122244', 'Johor', '2025-01-31', 1, NULL),
('nana', '$2y$10$abfFW3RRhDVEC', 'nana@gmail.com', 'nana', '011111111', 'Johor', '2025-01-30', 2, NULL),
('S001', '123456', 'fat@gmail.com', 'Fatah Abdul', '133333333', 'Melaka', '2024-02-01', 2, NULL),
('S002', '123456', 'kam@gmail.com', 'Kamarul Abdul', '124444444', 'Selangor', '2024-10-01', 2, NULL),
('S003', '$2y$10$Oc/2W6y0Km5qT', 'aflah@gmail.com', 'NABIL AFLAH BOO', '0123456789', 'Johor', '2025-01-29', 2, '2025-01-29 10:03:30');

-- --------------------------------------------------------

--
-- Table structure for table `tb_utype`
--

CREATE TABLE `tb_utype` (
  `ut_id` int(11) NOT NULL,
  `ut_desc` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `tb_utype`
--

INSERT INTO `tb_utype` (`ut_id`, `ut_desc`) VALUES
(3, 'Admin'),
(1, 'Lecturer'),
(2, 'Student');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `tb_course`
--
ALTER TABLE `tb_course`
  ADD PRIMARY KEY (`c_code`),
  ADD KEY `c_name` (`c_name`),
  ADD KEY `c_lec` (`c_lec`),
  ADD KEY `c_section` (`c_section`);

--
-- Indexes for table `tb_registration`
--
ALTER TABLE `tb_registration`
  ADD PRIMARY KEY (`r_id`),
  ADD KEY `r_student` (`r_student`),
  ADD KEY `r_course` (`r_course`),
  ADD KEY `r_sem` (`r_sem`),
  ADD KEY `r_status` (`r_status`),
  ADD KEY `r_section` (`r_section`);

--
-- Indexes for table `tb_status`
--
ALTER TABLE `tb_status`
  ADD PRIMARY KEY (`s_id`),
  ADD KEY `s_desc` (`s_desc`);

--
-- Indexes for table `tb_user`
--
ALTER TABLE `tb_user`
  ADD PRIMARY KEY (`u_sno`),
  ADD KEY `u_pwd` (`u_pwd`),
  ADD KEY `u_email` (`u_email`),
  ADD KEY `u_name` (`u_name`),
  ADD KEY `u_state` (`u_state`),
  ADD KEY `u_utype` (`u_utype`),
  ADD KEY `u_utype_2` (`u_utype`);

--
-- Indexes for table `tb_utype`
--
ALTER TABLE `tb_utype`
  ADD PRIMARY KEY (`ut_id`),
  ADD KEY `ut_desc` (`ut_desc`),
  ADD KEY `ut_desc_2` (`ut_desc`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `tb_registration`
--
ALTER TABLE `tb_registration`
  MODIFY `r_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=12;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `tb_course`
--
ALTER TABLE `tb_course`
  ADD CONSTRAINT `tb_course_ibfk_1` FOREIGN KEY (`c_lec`) REFERENCES `tb_user` (`u_sno`);

--
-- Constraints for table `tb_registration`
--
ALTER TABLE `tb_registration`
  ADD CONSTRAINT `tb_registration_ibfk_1` FOREIGN KEY (`r_student`) REFERENCES `tb_user` (`u_sno`),
  ADD CONSTRAINT `tb_registration_ibfk_2` FOREIGN KEY (`r_course`) REFERENCES `tb_course` (`c_code`),
  ADD CONSTRAINT `tb_registration_ibfk_3` FOREIGN KEY (`r_status`) REFERENCES `tb_status` (`s_id`);

--
-- Constraints for table `tb_user`
--
ALTER TABLE `tb_user`
  ADD CONSTRAINT `tb_user_ibfk_1` FOREIGN KEY (`u_utype`) REFERENCES `tb_utype` (`ut_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
