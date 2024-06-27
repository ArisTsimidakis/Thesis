class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            switch (6)
            {
            case 6:
                VAR2 = ""; 
                {
                    InputStreamReader VAR3 = null;
                    BufferedReader VAR4 = null;
                    
                    try
                    {
                        VAR3 = new InputStreamReader(System.in, "");
                        VAR4 = new BufferedReader(VAR3);
                        
                        VAR2 = VAR4.readLine();
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
    
                        try
                        {
                            if (VAR3 != null)
                            {
                                VAR3.close();
                            }
                        }
                        catch (IOException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
                    }
                }
                
                break;
            default:
                
                VAR2 = null;
                break;
            }
    
            switch (7)
            {
            case 7:
                String VAR10 = null;
                if(System.FUN2("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR10 = "";
                }
                else
                {
                    
                    VAR10 = "";
                }
                if (VAR2 != null)
                {
                    
                    String [] VAR11 = VAR2.split("");
                    if (VAR11.length < 2)
                    {
                        return;
                    }
                    String VAR12 = VAR11[0];
                    String VAR13 = VAR11[1];
                    
                    XPath VAR14 = VAR15.FUN3().FUN4();
                    InputSource VAR16 = new FUN5(VAR10);
                    
                    
                    String VAR17 = "
                                   "" + VAR13 + "" +
                                   "";
                    String VAR18 = (String)VAR14.FUN6(VAR17, VAR16, VAR19.VAR20);
                }
                break;
            default:
                
                VAR6.writeLine("");
                break;
            }
        }
};