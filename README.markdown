In order to make it work you have to:

   * Read and comply with http://cran.r-project.org/doc/manuals/R-admin.html#The-Windows-toolset
   * have qt-devel installed (refer to your package manager or http://qt-project.org, min ver 4.x)
   * have R installed and R_HOME environment variable set
   * Have ANT installed and configured (http://ant.apache.org/ download the zip, unzip and set ANT_HOME and PATH=$ANT_HOME/bin:$PATH)
   * be lucky
   
   * Last but not least, keep an eye open on build.xml for the deployment task : it copies the compiled artifact but defaults to ${R_HOME}/library/${ant.project.name}/libs/i386, Probably you'll have to correct this path
   
   
    Supposedly you should be able to do at R prompt:
    
    > library(grafoui)
    > grafoui::grafoui()
    
    And a QT windows should pop up open.
    
    What from now on? Well, you could develop your UI freely with QT tools and then intergate it in you R environment. Good luck
    
    
   