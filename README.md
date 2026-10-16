# Hotel Room Booking Application

A desktop-based hotel management and booking system developed using **C++/CLI, Windows Forms, and MySQL**. The application provides a graphical user interface for managing guests, room reservations, and booking records, with MySQL used for data storage.

## 🚀 Features

- **User and Guest Management:** Add, update, and manage guest/customer details.
- **Booking Management:** Manage room reservations and booking records.
- **Database Integration:** Store and retrieve application data using MySQL.
- **Graphical User Interface:** Interactive desktop interface developed using Windows Forms.
- **Login System:** Access the application using the configured login credentials.

## 🛠️ Technology Stack

- **Programming Language:** C++/CLI
- **Framework:** .NET Windows Forms
- **Database:** MySQL
- **Database Tool:** MySQL Workbench
- **IDE:** Microsoft Visual Studio
- **Version Control:** Git and GitHub

## ⚙️ Prerequisites

Before running the application, install the following software:

- [Visual Studio](https://visualstudio.microsoft.com/) with the required C++ desktop development and C++/CLI support.
- [MySQL Server](https://dev.mysql.com/downloads/mysql/)
- [MySQL Workbench](https://dev.mysql.com/downloads/workbench/)

## 📥 Installation and Setup

### Step 1: Download the Project

**Option 1: Clone the repository**

Open a terminal and run:

```bash
git clone YOUR_REPOSITORY_URL
```

Replace `YOUR_REPOSITORY_URL` with the actual URL of this GitHub repository.

**Option 2: Download as a ZIP file**

1. Open this repository on GitHub.
2. Click **Code → Download ZIP**.
3. Extract the downloaded ZIP file to your computer.

### Step 2: Set Up the Database

1. Open MySQL Workbench and connect to your local MySQL Server instance.

2. Create the database by executing the following SQL command:

   ```sql
   CREATE DATABASE hotel_management;
   ```

3. Select **Server → Data Import** from the top menu.

4. Choose **Import from Self-Contained File**.

5. Browse to the `hotel_systems.sql` file inside the project's `database` folder.

6. Under **Default Target Schema**, select `hotel_management`.

7. Select **Dump Structure and Data** if this option is available for your SQL dump.

8. Click **Start Import** and wait for the import process to finish.

Verify that the database tables have been imported successfully.

### Step 3: Configure the Database Connection

1. Open the project in Visual Studio by opening `Project1.sln` or the appropriate project file.
2. In **Solution Explorer**, locate and open `databaseConnection.h`.
3. Find the MySQL connection string and update it with your local database credentials.

Example:

```cpp
String^ constr = "Server=127.0.0.1;Uid=root;Pwd=YOUR_MYSQL_PASSWORD;Database=hotel_management;";
```

4. Replace `YOUR_MYSQL_PASSWORD` with your local MySQL root password.
5. Save the changes using `Ctrl + S`.

**Important:** Do not commit real database passwords or other sensitive credentials to a public GitHub repository. For a public project, use a configuration file excluded from version control or another suitable method to store credentials securely.

### Step 4: Build and Run the Application

1. Open the project in Visual Studio.
2. Select the appropriate build configuration, such as **Debug**, and the correct platform.
3. Build the project using **Build → Build Solution**.
4. Press `Ctrl + F5` or select **Start Without Debugging** to launch the application.
5. When the login screen appears, use the default credentials below, provided they exist in the imported database.

## 🔐 Default Login Credentials

| Field    | Value      |
| -------- | ---------- |
| Username | `admin01`  |
| Password | `admin123` |

**Note:** These are the default credentials configured for this project. If they do not work, check the user records in the imported database.

For security, change the default password before using the application in a real environment.

## 📁 Project Structure

The repository is expected to contain the following files and folders:

```text
Hotel-Booking-Application/
├── database/
│   └── hotel_systems.sql
├── Project1/
│   ├── Project1.vcxproj
│   └── databaseConnection.h
├── Project1.sln
└── README.md
```

*Note: The actual folder structure may differ depending on the files included in your repository.*

## 👥 Developers

**RUSL Byte Builders**

Department of Computing
Rajarata University of Sri Lanka

## 📌 Project Purpose

This project was developed as a learning project to apply object-oriented programming concepts, desktop application development, and database connectivity using C++/CLI, Windows Forms, and MySQL.

## 📄 License

No license has been specified for this project. If you intend to allow others to use, modify, or distribute the source code, consider adding an appropriate open-source license.
