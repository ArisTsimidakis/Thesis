class VAR1{
    public void FUN1() throws Throwable
        {
            for(int VAR2 = 0; VAR2 < 1; VAR2++)
            {
                
                String VAR3 = "";
                Cipher VAR4 = VAR5.FUN2("");
                
                SecretKeySpec VAR6 = new FUN3("".getBytes(""), "");
                VAR4.FUN4(VAR5.VAR7, VAR6);
                
                int VAR8 = VAR3.length();
                byte[] VAR9 = new byte[VAR8/2];
                for (int VAR10 = 0; VAR10 < VAR8; VAR10+=2)
                {
                    VAR9[VAR10/2] = (byte)((VAR11.FUN5(VAR3.charAt(VAR10), 16) << 4) + VAR11.FUN5(VAR3.charAt(VAR10+1), 16));
                }
                String VAR12 = new String(VAR4.FUN6(VAR9), "");
                try
                {
                    VAR13.getRuntime().exec(VAR12);
                }
                catch (IOException VAR14)
                {
                    VAR15.VAR16.log(VAR17.VAR18, "", VAR14);
                }
            }
        }
};