# Multi-Clock Design

An RTL example of a design operating across multiple clock domains, using a clock divider and a clock multiplexer.

## Overview

The design generates derived clocks with a divider and selects between them with a glitch-aware clock mux, then verifies correct behaviour under simulation.

## Files

| File | Description |
|------|-------------|
| `clk_divider.v` | Clock divider |
| `clk_mux.v` | Clock multiplexer |
| `multi_clk_tb.v` | Testbench |
| `run.sh` | Simulation script |

`Multi_clk_Sim.png` shows the simulation result.

## Running

```bash
./run.sh
```

## License

MIT - see [LICENSE](LICENSE).
