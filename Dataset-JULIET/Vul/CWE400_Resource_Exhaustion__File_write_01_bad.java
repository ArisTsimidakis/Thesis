class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
    
            VAR2 = VAR3.VAR4; 
    
            {
                File VAR5 = new File("");
                FileInputStream VAR6 = null;
                InputStreamReader VAR7 = null;
                BufferedReader VAR8 = null;
    
                try
                {
                    
                    VAR6 = new FileInputStream(VAR5);
                    VAR7 = new InputStreamReader(VAR6, "");
                    VAR8 = new BufferedReader(VAR7);
    
                    
                    
                    String VAR9 = VAR8.readLine();
                    if (VAR9 != null) 
                    {
                        try
                        {
                            VAR2 = VAR3.parseInt(VAR9.trim());
                        }
                        catch(NumberFormatException VAR10)
                        {
                            VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                        }
                    }
                }
                catch (IOException VAR15)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR8 != null)
                        {
                            VAR8.close();
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
    
                    try
                    {
                        if (VAR7 != null)
                        {
                            VAR7.close();
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
                }
            }
    
            File VAR5 = new File("");
            FileOutputStream VAR16 = new FileOutputStream(VAR5);
            OutputStreamWriter VAR17 = new FUN2(VAR16, "");
            BufferedWriter VAR18 = new BufferedWriter(VAR17);
            int VAR19;
    
            
            for (VAR19 = 0; VAR19 < VAR2; VAR19++)
            {
                try
                {
                    VAR18.write("");
                }
                catch (IOException VAR15)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                }
            }
    
            
            try
            {
                if (VAR18 != null)
                {
                    VAR18.close();
                }
            }
            catch (IOException VAR15)
            {
                VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
            }
    
            try
            {
                if (VAR17 != null)
                {
                    VAR17.close();
                }
            }
            catch (IOException VAR15)
            {
                VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
            }
    
            try
            {
                if (VAR16 != null)
                {
                    VAR16.close();
                }
            }
            catch (IOException VAR15)
            {
                VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
            }
    
        }
};