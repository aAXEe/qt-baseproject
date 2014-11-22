TEMPLATE = subdirs

SUBDIRS += \
    gui \
    logic \
    logic_test


gui.depends = logic
logic_test.depends = logic
