static const char *colorname[] = {
     "#1d202f", // Black
     "#f7768e", // Red
     "#9ece6a", // Green
     "#e0af68", // Yellow
     "#7aa2f7", // Blue
     "#bb9af7", // Magenta
     "#7dcfff", // Cyan
     "#a9b1d6", // White
                                   
                
     "#414868", // Bright Black
     "#f7768e", // Bright Red
     "#9ece6a", // Bright Green
     "#e0af68", // Bright Yellow
     "#7aa2f7", // Bright Blue
     "#bb9af7", // Bright Magenta
     "#7dcfff", // Bright Cyan
     "#c0caf5", // Bright White    
                                                    
     [255] = 0,                    

     "#364a82", // 256
     "#c0caf5", // 257 -> Cursor
     "#c0caf5", // 258 -> Foreground
     "#222436", // 259 -> Background
 };
 
/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 257;
unsigned int defaultrcs = 256;
