// main.cpp

#include <QApplication>
#include <QWidget>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv); // Create the application object

    // Create a main window widget
    QWidget window;
    window.resize(250, 150); // Set size of the window
    window.setWindowTitle("Simple GUI Example"); // Set window title

    // Create a button widget
    QPushButton button("Click me!", &window);
    button.setGeometry(QRect(QPoint(100, 50), QSize(100, 50))); // Set button position and size

    // Connect button click signal to quit slot (quit the application when button is clicked)
    QObject::connect(&button, &QPushButton::clicked, &app, &QApplication::quit);

    window.show(); // Display the window

    return app.exec(); // Start the application event loop
}
