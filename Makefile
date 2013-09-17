.PHONY: clean All

All:
	@echo "----------Building project:[ Lingov2 - Debug ]----------"
	@$(MAKE) -f  "Lingov2.mk"
clean:
	@echo "----------Cleaning project:[ Lingov2 - Debug ]----------"
	@$(MAKE) -f  "Lingov2.mk" clean
