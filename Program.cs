using System;
using System.Collections.Generic; 
namespace VirtualClassroom
{
    public class Chair
    {
        public int Id;
        public string Colour;
        public string Material;
    }

    public class ListChair
    {
        public List<Chair> Chairs = new List<Chair>();
    }

    public class Table
    {
        public string Material;
        public string Shape;
    }

    public class ListTable
    {
        public List<Table> Tables = new List<Table>();
    }

    public class TV
    {
        public string Brand;
        public int Size;
    }
    public class ListTv
    {
        public List<TV> TVs = new List<TV>();
    }

    public class Speakers
    {
        public string Brand;
        public int Volume;
        
    }

    public class ListSpeaker
    {
        public List<Speakers> Speakers = new List<Speakers>();
    }

    public class Light
    {
        public string Type;
        public int Brightness;
    }

    public class ListLight
    {
        public List<Light> Lights = new List<Light>();
    }

    public class Student
    {
        public string Name;
        public int StudentId;
        public string Grade;
    }

    public class Lecturer
    {
        public string Name;
        public int LecturerId;
        public string Subject;

    }




    public class Class
    {
        public string CourseName;
        public string RoomNumber;
        public Lecturer Lecturer;
        public List<Student> Students = new List<Student>();
    }
    
}
