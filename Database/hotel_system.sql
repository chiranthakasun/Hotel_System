-- MySQL dump 10.13  Distrib 8.0.42, for Win64 (x86_64)
--
-- Host: localhost    Database: hotel_management
-- ------------------------------------------------------
-- Server version	8.0.42

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `guest`
--

DROP TABLE IF EXISTS `guest`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `guest` (
  `NIC` varchar(20) NOT NULL,
  `name` varchar(100) DEFAULT NULL,
  `gender` varchar(20) DEFAULT NULL,
  `mobile_number` varchar(20) DEFAULT NULL,
  `address` varchar(200) DEFAULT NULL,
  PRIMARY KEY (`NIC`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `guest`
--

LOCK TABLES `guest` WRITE;
/*!40000 ALTER TABLE `guest` DISABLE KEYS */;
INSERT INTO `guest` VALUES ('199678901234','Sachini Gunasekara','Female','0778901234','Ratnapura, Sri Lanka'),('199765432109','Tharushi Peris','Female','0785678901','Matara, Sri Lanka'),('199765432109 ','Tharushi Peris ','Female','0785678901 ','Matara, Sri Lanka '),('199812345678','Ishara Madushanka','Male','0747890123','Anuradhapura, Sri Lanka'),('199856789012','Nimal Silva','Male','0771234567','Kandy, Sri Lanka'),('199934567890','Sanduni Jayawardena','Female','0753456789','Negombo, Sri Lanka'),('199945678945','Sanduni Jayawardena','Female','0753456789','Negambo, Sri Lanka'),('200012345678','Kamal Perera','Male','0712345678','Colombo, Sri Lanka'),('200145678901','Amaya Fernando','Female','0762345678','Galle, Sri Lanka'),('200245612734','Janith Prasanna','Male','0778484563','Kurunegala'),('200245678963','Kasun Ekanayaka','Male','0774567845','Nikaweratiya, Kurunegala'),('200278901234','Kasun Bandara','Male','0724567890','Kurunegala, Sri Lanka'),('200356789012','Dilan Wickramasinghe','Male','0706789012','Jaffna, Sri Lanka'),('200423456789','Dinithi Rathnayake','Female','0768901234','Badulla, Sri Lanka');
/*!40000 ALTER TABLE `guest` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `reservation`
--

DROP TABLE IF EXISTS `reservation`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `reservation` (
  `reservation_id` int NOT NULL AUTO_INCREMENT,
  `booking_date` date DEFAULT NULL,
  `booking_time` time DEFAULT NULL,
  `check_in_date` date DEFAULT NULL,
  `check_out_date` date DEFAULT NULL,
  `status` varchar(30) DEFAULT NULL,
  `staff_id` int DEFAULT NULL,
  `NIC` varchar(20) DEFAULT NULL,
  `room_no` int DEFAULT NULL,
  PRIMARY KEY (`reservation_id`),
  KEY `staff_id` (`staff_id`),
  KEY `NIC` (`NIC`),
  KEY `room_no` (`room_no`),
  CONSTRAINT `reservation_ibfk_1` FOREIGN KEY (`staff_id`) REFERENCES `staff` (`staff_id`),
  CONSTRAINT `reservation_ibfk_2` FOREIGN KEY (`NIC`) REFERENCES `guest` (`NIC`),
  CONSTRAINT `reservation_ibfk_3` FOREIGN KEY (`room_no`) REFERENCES `room` (`room_no`)
) ENGINE=InnoDB AUTO_INCREMENT=25 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `reservation`
--

LOCK TABLES `reservation` WRITE;
/*!40000 ALTER TABLE `reservation` DISABLE KEYS */;
INSERT INTO `reservation` VALUES (17,'2026-10-14','21:19:28','2026-11-14','2026-11-16','Confirmed',8,'200423456789',105),(18,'2026-10-14','17:21:46','2026-10-14','2026-11-20','Confirmed',6,'200012345678',104),(20,'2026-10-14','23:56:00','2026-10-14','2026-11-14',NULL,11,'200356789012',107),(23,'2026-10-15','00:03:30','2026-10-15','2027-12-15',NULL,20,'200145678901',105);
/*!40000 ALTER TABLE `reservation` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `room`
--

DROP TABLE IF EXISTS `room`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `room` (
  `room_no` int NOT NULL,
  `room_type` varchar(50) DEFAULT NULL,
  `price` decimal(10,2) DEFAULT NULL,
  `no_of_beds` int DEFAULT NULL,
  `ac_or_non_ac` varchar(20) DEFAULT NULL,
  `outdoor_bathroom` tinyint(1) DEFAULT NULL,
  `attach_bathroom` tinyint(1) DEFAULT NULL,
  `status` varchar(30) DEFAULT NULL,
  PRIMARY KEY (`room_no`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `room`
--

LOCK TABLES `room` WRITE;
/*!40000 ALTER TABLE `room` DISABLE KEYS */;
INSERT INTO `room` VALUES (1,'Delux',5000.00,2,'AC',1,1,'Available'),(2,'double',8000.00,2,'AC',0,1,'Available'),(6,'single',8500.00,4,'AC',0,1,'Available'),(10,'Single',5000.00,1,'AC',0,1,'Available'),(101,'Single',5000.00,1,'AC',0,1,'Available'),(102,'Single',4000.00,1,'Non-AC',0,1,'Available'),(103,'Double',8000.00,2,'AC',0,1,'Available'),(104,'Double',6500.00,2,'Non-AC',1,0,'Booked'),(105,'Triple',10000.00,3,'AC',0,1,'Available'),(106,'Triple',8500.00,3,'Non-AC',1,0,'Maintenance'),(107,'Deluxe',15000.00,2,'AC',0,1,'Available'),(108,'Family',18000.00,4,'AC',0,1,'Booked'),(109,'Family',14000.00,4,'Non-AC',1,0,'Available'),(110,'Suite',25000.00,2,'AC',0,1,'Available');
/*!40000 ALTER TABLE `room` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `staff`
--

DROP TABLE IF EXISTS `staff`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `staff` (
  `staff_id` int NOT NULL AUTO_INCREMENT,
  `username` varchar(50) NOT NULL,
  `password` varchar(100) NOT NULL,
  `name` varchar(100) DEFAULT NULL,
  `gender` varchar(20) DEFAULT NULL,
  `mobile_number` varchar(20) DEFAULT NULL,
  `address` varchar(200) DEFAULT NULL,
  `role` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`staff_id`)
) ENGINE=InnoDB AUTO_INCREMENT=25 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `staff`
--

LOCK TABLES `staff` WRITE;
/*!40000 ALTER TABLE `staff` DISABLE KEYS */;
INSERT INTO `staff` VALUES (1,'admin01','admin123','Kasun Perera','Male','0771234567','Colombo, Sri Lanka','Admin'),(2,'staff01','staff123','Nimal Silva','Male','0712345678','Kandy, Sri Lanka','Manager'),(3,'staff02','staff456','Amali Fernando','Female','0763456789','Galle, Sri Lanka','Cashier'),(4,'staff03','staff789','Tharushi Jayawardena','Female','0754567890','Kurunegala, Sri Lanka','Receptionist'),(5,'staff04','staff101','Saman Kumara','Male','0725678901','Matara, Sri Lanka','Employee'),(6,'staff05','staff202','Dilani Peris','Female','0786789012','Negombo, Sri Lanka','Cashier'),(7,'staff06','staff303','Ravindu Bandara','Male','0707890123','Anuradhapura, Sri Lanka','Employee'),(8,'staff07','staff404','Sachini Gunawardena','Female','0748901234','Gampaha, Sri Lanka','Manager'),(9,'staff08','staff808','sachithra Hasaral','Male','0773834910','Medawachiya, Anuradhapura','Receptionist '),(10,'staff09','staff909','Kamala Gunasiri','Female','0773584576','Kurunegala, Kobeigane','Receptionist '),(11,'staff1010','staff10001','Dimalka Pradeepana','Male','0714600147','Medawachiya, Anuradhapura','Receptionist '),(12,'admin01','Admin@123','Nuwan Perera','Male','0712345678','Colombo, Sri Lanka','Admin'),(13,'manager01','Manager@123','Kasun Silva','Male','0771234567','Kandy, Sri Lanka','Manager'),(14,'reception01','Reception@123','Amaya Fernando','Female','0762345678','Galle, Sri Lanka','Receptionist'),(15,'reception02','Reception@456','Sanduni Jayawardena','Female','0753456789','Negombo, Sri Lanka','Receptionist'),(16,'housekeep01','House@123','Kamal Bandara','Male','0724567890','Kurunegala, Sri Lanka','Housekeeper'),(17,'housekeep02','House@456','Tharushi Peris','Female','0785678901','Matara, Sri Lanka','Housekeeper'),(18,'account01','Account@123','Dilan Wickramasinghe','Male','0706789012','Jaffna, Sri Lanka','Accountant'),(19,'chef01','Chef@123','Ishara Madushanka','Male','0747890123','Anuradhapura, Sri Lanka','Chef'),(20,'security01','Security@123','Dinithi Rathnayake','Female','0768901234','Badulla, Sri Lanka','Security'),(21,'maintenance01','Maint@123','Sachini Gunasekara','Female','0778901234','Ratnapura, Sri Lanka','Maintenance'),(22,'aki012','himin2k','Akindu Dulwan','Male','119','Kuliyapitiya, Kurunegala','Receptionist '),(23,'staff01','staff123 ','Nimal Silva    ','Male',' 0712345678','Kandy, Sri Lanka','Manager'),(24,'staff08','staff808','Sachithra Hasaral','Male','0773834910','Medawachiya, Anuradhapura','Receptionist ');
/*!40000 ALTER TABLE `staff` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2026-10-16  8:52:59
