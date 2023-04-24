find . \( -name "*.gch" -o -name "a.out" -o -name "*.o" -not -path "./push_swap_visualizer/*" -o -name "*.swp" \) -exec rm -rf {} \; -print
