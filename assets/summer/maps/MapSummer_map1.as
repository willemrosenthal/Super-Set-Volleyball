//Code generated by Flan. http://www.tbam.com.ar/utility--flan.php

package  {
	import com.adamatomic.flixel.*;
	
	public class MapSummer_map1 extends MapBase {
		//Media content declarations
		[Embed(source="MapCSV_Summer_map1_NewLayer.txt", mimeType="application/octet-stream")] public var CSV_NewLayer:Class;
		[Embed(source="../summer_tiles.png")] public var Img_NewLayer:Class;

		
		public function MapSummer_map1() {

			_setCustomValues();

			bgColor = 0xffffffff;

			layerNewLayer = new FlxTilemap(new CSV_NewLayer, Img_NewLayer,1,1);
			layerNewLayer.x = 0;
			layerNewLayer.y = 0;
			layerNewLayer.scrollFactor.x = 1.000000;
			layerNewLayer.scrollFactor.y = 1.000000;

			allLayers = [ layerNewLayer ];


			boundsMinX = 0;
			boundsMinY = 0;
			boundsMaxX = 640;
			boundsMaxY = 800;
		}

		override public function customFunction(param:* = null):* {

		}

		private function _setCustomValues():void {
		}

	}
}
