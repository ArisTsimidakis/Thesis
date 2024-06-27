class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4==5)
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
    
            if (VAR3.VAR4==5)
            {
                String VAR13 = null;
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR13 = "";
                }
                else
                {
                    
                    VAR13 = "";
                }
                if (VAR2 != null)
                {
                    
                    String [] VAR14 = VAR2.split("");
                    if( VAR14.length < 2 )
                    {
                        return;
                    }
                    
                    String VAR15 = VAR16.FUN4(VAR14[0]);
                    String VAR17 = VAR16.FUN4(VAR14[1]);
                    
                    XPath VAR18 = VAR19.FUN5().FUN6();
                    InputSource VAR20 = new FUN7(VAR13);
                    String VAR21 = "
                                   "" + VAR17 + "" +
                                   "";
                    String VAR22 = (String)VAR18.FUN8(VAR21, VAR20, VAR23.VAR24);
                }
            }
        }
};