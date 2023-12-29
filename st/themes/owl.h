static const char *colorname[] = {
     "#011627",
     "#EF5350",
     "#22da6e",
     "#c5e478",
     "#82AAFF",
     "#C792EA",
     "#21c7a8",
     "#ffffff",

     "#575656",
     "#EF5350",
     "#22da6e",
     "#ffeb95",
     "#82AAFF",
     "#C792EA",
     "#7fdbca",
     "#ffffff",
                                                    
     [255] = 0,                    

     "#364a82", // 256
     "#d6deeb", // 257 -> Cursor
     "#d6deeb", // 258 -> Foreground
     "#011627", // 259 -> Background
 };
 
/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 257;
unsigned int defaultrcs = 256;
