static const char *colorname[] = {
     "#414868", // Black
     "#f7768e", // Red
     "#73daca", // Green
     "#e0af68", // Yellow
     "#7aa2f7", // Blue
     "#bb9af7", // Magenta
     "#7dcfff", // Cyan
     "#c0caf5", // White
                                   
                
     "#414868", // Bright Black
     "#f7768e", // Bright Red
     "#73daca", // Bright Green
     "#e0af68", // Bright Yellow
     "#7aa2f7", // Bright Blue
     "#bb9af7", // Bright Magenta
     "#7dcfff", // Bright Cyan
     "#c0caf5", // Bright White    
                                                    
     [255] = 0,                    

     "#364a82", // 256
     "#e0af68", // 257 -> Cursor
     "#a9b1d6", // 258 -> Foreground
     //"#1f212e", // 259 -> Background Soft
     "#1a1b26", // 259 -> Background dark
 };
 
/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 257;
unsigned int defaultrcs = 256;
