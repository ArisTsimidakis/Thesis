bool VAR1::FUN1(
    ContentSecurityPolicyHeaderSource VAR2) const {
  for (const auto& VAR3 : VAR4) {
    if (VAR3->FUN2() == VAR2)
      return true;
  }
  return false;
}