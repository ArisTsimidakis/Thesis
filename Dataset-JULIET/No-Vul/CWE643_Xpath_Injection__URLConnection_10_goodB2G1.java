class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                
                {
                    URLConnection VAR5 = (new FUN2("VAR6:
                    BufferedReader VAR7 = null;
                    InputStreamReader VAR8 = null;
                    try
                    {
                        VAR8 = new InputStreamReader(VAR5.getInputStream(), "");
                        VAR7 = new BufferedReader(VAR8);
                        
                        
                        VAR2 = VAR7.readLine();
                    }
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
    
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR13)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                String VAR14 = null;
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR14 = "";
                }
                else
                {
                    
                    VAR14 = "";
                }
    
                if (VAR2 != null)
                {
                    
                    String [] VAR15 = VAR2.split("");
                    if( VAR15.length < 2 )
                    {
                        return;
                    }
                    
                    String VAR16 = VAR17.FUN4(VAR15[0]);
                    String VAR18 = VAR17.FUN4(VAR15[1]);
                    
                    XPath VAR19 = VAR20.FUN5().FUN6();
                    InputSource VAR21 = new FUN7(VAR14);
                    String VAR22 = "
                                   "" + VAR18 + "" +
                                   "";
                    String VAR23 = (String)VAR19.FUN8(VAR22, VAR21, VAR24.VAR25);
                }
    
            }
        }
};