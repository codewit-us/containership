import py_code
import pytest

def test_smoke():
    assert py_code.secret_word() == "psst!"
