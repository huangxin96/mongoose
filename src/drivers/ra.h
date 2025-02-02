#pragma once

struct mg_tcpip_driver_ra_data {
  // MDC clock "divider". MDC clock is software generated,
  uint32_t clock;    // core clock frequency in Hz
  uint16_t irqno;    // IRQn, R_ICU->IELSR[irqno]
  uint8_t phy_addr;  // PHY address
};
