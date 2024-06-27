class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.FUN2())
            {
                
                VAR2 = 0;
            }
            else
            {
    
                
                VAR2 = 2;
    
            }
    
            if (VAR3.FUN3())
            {
                File VAR4 = new File("");
                FileOutputStream VAR5 = new FileOutputStream(VAR4);
                OutputStreamWriter VAR6 = new FUN4(VAR5, "");
                BufferedWriter VAR7 = new BufferedWriter(VAR6);
                int VAR8;
                
                for (VAR8 = 0; VAR8 < VAR2; VAR8++)
                {
                    try
                    {
                        VAR7.write("");
                    }
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                }
                
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
                    if (VAR6 != null)
                    {
                        VAR6.close();
                    }
                }
                catch (IOException VAR9)
                {
                    VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                }
                try
                {
                    if (VAR5 != null)
                    {
                        VAR5.close();
                    }
                }
                catch (IOException VAR9)
                {
                    VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                }
            }
        }
};