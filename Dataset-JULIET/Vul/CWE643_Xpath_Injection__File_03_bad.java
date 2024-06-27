class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (5==5)
            {
                VAR2 = ""; 
                {
                    File VAR3 = new File("");
                    FileInputStream VAR4 = null;
                    InputStreamReader VAR5 = null;
                    BufferedReader VAR6 = null;
                    try
                    {
                        
                        VAR4 = new FileInputStream(VAR3);
                        VAR5 = new InputStreamReader(VAR4, "");
                        VAR6 = new BufferedReader(VAR5);
                        
                        
                        VAR2 = VAR6.readLine();
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (5==5)
            {
                String VAR12 = null;
                if(System.FUN2("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR12 = "";
                }
                else
                {
                    
                    VAR12 = "";
                }
                if (VAR2 != null)
                {
                    
                    String [] VAR13 = VAR2.split("");
                    if (VAR13.length < 2)
                    {
                        return;
                    }
                    String VAR14 = VAR13[0];
                    String VAR15 = VAR13[1];
                    
                    XPath VAR16 = VAR17.FUN3().FUN4();
                    InputSource VAR18 = new FUN5(VAR12);
                    
                    
                    String VAR19 = "
                                   "" + VAR15 + "" +
                                   "";
                    String VAR20 = (String)VAR16.FUN6(VAR19, VAR18, VAR21.VAR22);
                }
            }
        }
};