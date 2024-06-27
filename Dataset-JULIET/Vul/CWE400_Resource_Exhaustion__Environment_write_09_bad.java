class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = VAR5.VAR6; 
                
                
                {
                    String VAR7 = System.FUN2("");
                    if (VAR7 != null) 
                    {
                        try
                        {
                            VAR2 = VAR5.parseInt(VAR7.trim());
                        }
                        catch(NumberFormatException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.VAR4)
            {
                File VAR12 = new File("");
                FileOutputStream VAR13 = new FileOutputStream(VAR12);
                OutputStreamWriter VAR14 = new FUN3(VAR13, "");
                BufferedWriter VAR15 = new BufferedWriter(VAR14);
                int VAR16;
                
                for (VAR16 = 0; VAR16 < VAR2; VAR16++)
                {
                    try
                    {
                        VAR15.write("");
                    }
                    catch (IOException VAR17)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR17);
                    }
                }
                
                try
                {
                    if (VAR15 != null)
                    {
                        VAR15.close();
                    }
                }
                catch (IOException VAR17)
                {
                    VAR3.VAR9.log(VAR10.VAR11, "", VAR17);
                }
                try
                {
                    if (VAR14 != null)
                    {
                        VAR14.close();
                    }
                }
                catch (IOException VAR17)
                {
                    VAR3.VAR9.log(VAR10.VAR11, "", VAR17);
                }
                try
                {
                    if (VAR13 != null)
                    {
                        VAR13.close();
                    }
                }
                catch (IOException VAR17)
                {
                    VAR3.VAR9.log(VAR10.VAR11, "", VAR17);
                }
            }
        }
};