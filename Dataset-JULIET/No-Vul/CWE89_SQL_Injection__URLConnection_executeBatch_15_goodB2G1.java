class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            switch (6)
            {
            case 6:
                VAR2 = ""; 
                
                {
                    URLConnection VAR3 = (new FUN2("VAR4:
                    BufferedReader VAR5 = null;
                    InputStreamReader VAR6 = null;
                    try
                    {
                        VAR6 = new InputStreamReader(VAR3.getInputStream(), "");
                        VAR5 = new BufferedReader(VAR6);
                        
                        
                        VAR2 = VAR5.readLine();
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                    finally
                    {
                        
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
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
                    }
                }
                break;
            default:
                
                VAR2 = null;
                break;
            }
    
            switch (8)
            {
            case 7:
                
                VAR8.writeLine("");
                break;
            default:
                if (VAR2 != null)
                {
                    String VAR12[] = VAR2.split("");
                    int VAR13 = 0;
                    Connection VAR14 = null;
                    PreparedStatement VAR15 = null;
                    try
                    {
                        
                        VAR14 = VAR8.FUN3();
                        VAR15 = VAR14.FUN4("");
                        for (int VAR16 = 0; VAR16 < VAR12.length; VAR16++)
                        {
                            VAR15.FUN5(1, VAR12[VAR16]);
                            VAR15.FUN6();
                        }
                        int VAR17[] = VAR15.FUN7();
                        for (int VAR16 = 0; VAR16 < VAR12.length; VAR16++)
                        {
                            if (VAR17[VAR16] > 0)
                            {
                                VAR13++;
                            }
                        }
                        VAR8.writeLine("" + VAR13 + "" + VAR12.length + "");
                    }
                    catch (SQLException VAR18)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR18);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR15 != null)
                            {
                                VAR15.close();
                            }
                        }
                        catch (SQLException VAR18)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR18);
                        }
    
                        try
                        {
                            if (VAR14 != null)
                            {
                                VAR14.close();
                            }
                        }
                        catch (SQLException VAR18)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR18);
                        }
                    }
                }
                break;
            }
        }
};