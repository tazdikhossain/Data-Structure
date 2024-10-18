let courses = ["React", "Next.js", "Nest.js", "mySql"];
console.log(courses);
console.log(courses[0]);
console.log(courses[courses.length-1]);
courses.push("Postgres");
courses.unshift("Javascript");
courses.pop("mySql");
let length = courses.length;
for(let i=0;i<length;i++)
{
    console.log(courses[i]);
}
console.log(courses.toString());

const data = [[1,2,3],[5,6,7],[8,9,10]];
console.log(data);
console.log(data[0][1]);
for(let i = 0; i<data.length; i++)
{
    for(let j=0; j<data[i].length; j++)
    {
        console.log(data[i][j]);
    }
}

