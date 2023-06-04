#define DOOR_GLASS_HITPOINT(glassID,arm,rad) \
			class Glass_##glassID##_hitpoint \
			{ \
				armor = arm; \
				material = -1; \
				name = Glass_##glassID; \
				visual = Glass_##glassID##_hide; \
				passThrough = 0; \
				radius = rad; \
				convexComponent = Glass_##glassID##_hide; \
				class DestructionEffects \
				{ \
					class BrokenGlass1 \
					{ \
						simulation = "particles"; \
						type = "BrokenGlass1ND"; \
						position = Glass_##glassID##_effects; \
						intensity = 0.15000001; \
						interval = 1; \
						lifeTime = 0.05; \
					}; \
					class BrokenGlass2: BrokenGlass1 \
					{ \
						type = "BrokenGlass2ND"; \
					}; \
					class BrokenGlass3: BrokenGlass1 \
					{ \
						type = "BrokenGlass3ND"; \
					}; \
					class BrokenGlass4: BrokenGlass1 \
					{ \
						type = "BrokenGlass4ND"; \
					}; \
					class BrokenGlass5: BrokenGlass1 \
					{ \
						type = "BrokenGlass5ND"; \
					}; \
					class BrokenGlass6: BrokenGlass1 \
					{ \
						type = "BrokenGlass6ND"; \
					}; \
					class BrokenGlass7: BrokenGlass1 \
					{ \
						type = "BrokenGlass7ND"; \
					}; \
					class BrokenGlass1S: BrokenGlass1 \
					{ \
						type = "BrokenGlass1SD"; \
					}; \
					class BrokenGlass2S: BrokenGlass1 \
					{ \
						type = "BrokenGlass2SD"; \
					}; \
					class BrokenGlass3S: BrokenGlass1 \
					{ \
						type = "BrokenGlass3SD"; \
					}; \
					class BrokenGlass4S: BrokenGlass1 \
					{ \
						type = "BrokenGlass4SD"; \
					}; \
					class BrokenGlass5S: BrokenGlass1 \
					{ \
						type = "BrokenGlass5SD"; \
					}; \
					class BrokenGlass6S: BrokenGlass1 \
					{ \
						type = "BrokenGlass6SD"; \
					}; \
					class BrokenGlass7S: BrokenGlass1 \
					{ \
						type = "BrokenGlass7SD"; \
					}; \
				}; \
			};

#define BIG_GLASS_HITPOINT(glassID,arm,rad) \
			class Glass_##glassID##_hitpoint \
			{ \
				armor = arm; \
				material = -1; \
				name = Glass_##glassID; \
				visual = Glass_##glassID##_hide; \
				passThrough = 0; \
				radius = rad; \
				convexComponent = Glass_##glassID##_hide; \
				class DestructionEffects \
				{ \
					class BrokenGlass1 \
					{ \
						simulation = "particles"; \
						type = "BrokenGlass1NB"; \
						position = Glass_##glassID##_effects; \
						intensity = 0.15000001; \
						interval = 1; \
						lifeTime = 0.05; \
					}; \
					class BrokenGlass2: BrokenGlass1 \
					{ \
						type = "BrokenGlass2NB"; \
					}; \
					class BrokenGlass3: BrokenGlass1 \
					{ \
						type = "BrokenGlass3NB"; \
					}; \
					class BrokenGlass4: BrokenGlass1 \
					{ \
						type = "BrokenGlass4NB"; \
					}; \
					class BrokenGlass5: BrokenGlass1 \
					{ \
						type = "BrokenGlass5NB"; \
					}; \
					class BrokenGlass6: BrokenGlass1 \
					{ \
						type = "BrokenGlass6NB"; \
					}; \
					class BrokenGlass7: BrokenGlass1 \
					{ \
						type = "BrokenGlass7NB"; \
					}; \
					class BrokenGlass1S: BrokenGlass1 \
					{ \
						type = "BrokenGlass1SB"; \
					}; \
					class BrokenGlass2S: BrokenGlass1 \
					{ \
						type = "BrokenGlass2SB"; \
					}; \
					class BrokenGlass3S: BrokenGlass1 \
					{ \
						type = "BrokenGlass3SB"; \
					}; \
					class BrokenGlass4S: BrokenGlass1 \
					{ \
						type = "BrokenGlass4SB"; \
					}; \
					class BrokenGlass5S: BrokenGlass1 \
					{ \
						type = "BrokenGlass5SB"; \
					}; \
					class BrokenGlass6S: BrokenGlass1 \
					{ \
						type = "BrokenGlass6SB"; \
					}; \
					class BrokenGlass7S: BrokenGlass1 \
					{ \
						type = "BrokenGlass7SB"; \
					}; \
				}; \
			};

#define NORMAL_GLASS_HITPOINT(glassID,arm,rad) \
			class Glass_##glassID##_hitpoint \
			{ \
				armor = arm; \
				material = -1; \
				name = Glass_##glassID; \
				visual = Glass_##glassID##_hide; \
				passThrough = 0; \
				radius = rad; \
				convexComponent = Glass_##glassID##_hide; \
				class DestructionEffects \
				{ \
					class BrokenGlass1 \
					{ \
						simulation = "particles"; \
						type = "BrokenGlass1NN"; \
						position = Glass_##glassID##_effects; \
						intensity = 0.15000001; \
						interval = 1; \
						lifeTime = 0.05; \
					}; \
					class BrokenGlass2: BrokenGlass1 \
					{ \
						type = "BrokenGlass2NN"; \
					}; \
					class BrokenGlass3: BrokenGlass1 \
					{ \
						type = "BrokenGlass3NN"; \
					}; \
					class BrokenGlass4: BrokenGlass1 \
					{ \
						type = "BrokenGlass4NN"; \
					}; \
					class BrokenGlass5: BrokenGlass1 \
					{ \
						type = "BrokenGlass5NN"; \
					}; \
					class BrokenGlass6: BrokenGlass1 \
					{ \
						type = "BrokenGlass6NN"; \
					}; \
					class BrokenGlass7: BrokenGlass1 \
					{ \
						type = "BrokenGlass7NN"; \
					}; \
					class BrokenGlass1S: BrokenGlass1 \
					{ \
						type = "BrokenGlass1SN"; \
					}; \
					class BrokenGlass2S: BrokenGlass1 \
					{ \
						type = "BrokenGlass2SN"; \
					}; \
					class BrokenGlass3S: BrokenGlass1 \
					{ \
						type = "BrokenGlass3SN"; \
					}; \
					class BrokenGlass4S: BrokenGlass1 \
					{ \
						type = "BrokenGlass4SN"; \
					}; \
					class BrokenGlass5S: BrokenGlass1 \
					{ \
						type = "BrokenGlass5SN"; \
					}; \
					class BrokenGlass6S: BrokenGlass1 \
					{ \
						type = "BrokenGlass6SN"; \
					}; \
					class BrokenGlass7S: BrokenGlass1 \
					{ \
						type = "BrokenGlass7SN"; \
					}; \
				}; \
			};