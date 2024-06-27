class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                final byte[] VAR3 = new byte[] {0x01, 0x02, 0x03, 0x04, 0x05};
                SecureRandom VAR4 = new FUN3();
                
                VAR4.FUN4(VAR3);
                VAR2.writeLine("" + VAR4.nextInt()); 
                VAR2.writeLine("" + VAR4.nextInt());
            }
        }
};