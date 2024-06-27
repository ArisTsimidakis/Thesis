class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.VAR4)
            {
                
                VAR2 = VAR5.VAR6;
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.VAR4)
            {
                File VAR7 = new File("");
                FileOutputStream VAR8 = new FileOutputStream(VAR7);
                OutputStreamWriter VAR9 = new FUN2(VAR8, "");
                BufferedWriter VAR10 = new BufferedWriter(VAR9);
                int VAR11;
                
                for (VAR11 = 0; VAR11 < VAR2; VAR11++)
                {
                    try
                    {
                        VAR10.write("");
                    }
                    catch (IOException VAR12)
                    {
                        VAR3.VAR13.log(VAR14.VAR15, "", VAR12);
                    }
                }
                
                try
                {
                    if (VAR10 != null)
                    {
                        VAR10.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR3.VAR13.log(VAR14.VAR15, "", VAR12);
                }
                try
                {
                    if (VAR9 != null)
                    {
                        VAR9.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR3.VAR13.log(VAR14.VAR15, "", VAR12);
                }
                try
                {
                    if (VAR8 != null)
                    {
                        VAR8.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR3.VAR13.log(VAR14.VAR15, "", VAR12);
                }
            }
        }
};