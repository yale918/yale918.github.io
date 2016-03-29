<script src="//d3js.org/d3.v3.min.js" charset="utf-8"></script>

//<script type="text/javascript" src="//cdnjs.cloudflare.com/ajax/libs/d3/3.5.5/d3.min.js"></script>

function myFunc(){    alert("hello world");	}
var death_rate = [['越南',24.26],['阿魯巴',17.48],['關島',10.01],['澳門',5.84]];
var div_data_bind = d3.select("body").selectAll("div").data(death_rate);
div_set = div_data_bind.enter().append("div");
div_data_bind.exit().remove();
div_set.text(function(d,i) {
  return i + " / " + d[0];
});




/*
<script type="text/javascript" src="//cndjs.cloudflare.com/ajax/libs/d3/3.5.5/d3.min.js"></script>

var death_rate =[['越南',24.26],['阿魯巴',17.48],['關島',10.01],['澳門',5.84]];


//var root ＝ d3.select("body");

//var span = d3.select("body").select("h3").select("span");

//span.text("hello world").style("font-size", "24px");

//var div = d3.select("body").selectAll("div");

//d3.select("body").selectAll("div").data(death_rate);

var div_data_bind = d3.select("body").selectAll("div").data(death_rate);

var div_set = div_data_bind.enter().append("div");

div_data_bind.exit().remove();

div_set.text(function(d,i){
	return i+ "/" +d[0];
});

*/
/*
div_set.style("height", "20px");
div_set.style("background","red");
div_set.style("margin", "5px");
div_set.style("width", function(d,i){
	return (d[1] * 10) + "px";
});
*/

