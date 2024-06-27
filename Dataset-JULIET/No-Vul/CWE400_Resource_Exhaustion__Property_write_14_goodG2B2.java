class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.VAR4==5)
            {
                
                VAR2 = 2;
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.VAR4==5)
            {
                File VAR5 = new File("");
                FileOutputStream VAR6 = new FileOutputStream(VAR5);
                OutputStreamWriter VAR7 = new FUN2(VAR6, "");
                BufferedWriter VAR8 = new BufferedWriter(VAR7);
                int VAR9;
                
                for (VAR9 = 0; VAR9 < VAR2; VAR9++)
                {
                    try
                    {
                        VAR8.write("");
                    }
                    catch (IOException VAR10)
                    {
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                    }
                }
                
                try
                {
                    if (VAR8 != null)
                    {
                        VAR8.close();
                    }
                }
                catch (IOException VAR10)
                {
                    VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                }
                try
                {
                    if (VAR7 != null)
                    {
                        VAR7.close();
                    }
                }
                catch (IOException VAR10)
                {
                    VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                }
                try
                {
                    if (VAR6 != null)
                    {
                        VAR6.close();
                    }
                }
                catch (IOException VAR10)
                {
                    VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                }
            }
        }
};